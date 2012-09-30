/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
package com.wiyun.engine.actions.grid;

import com.wiyun.engine.types.WYGridSize;

/**
 * 网格波浪效果。
 */
public class WavesTiles3D extends TiledGrid3DAction {
	/**
	 * 创建动作实例
	 * 
	 * @param duration 动作持续时间
	 * @param gridSize 网格行列数
	 * @param amplitude 幅度
	 * @param waves 波浪数
	 * @return 动作实例
	 */
	public static WavesTiles3D make(float duration, WYGridSize gridSize, float amplitude, int waves) {
		return new WavesTiles3D(duration, gridSize, amplitude, waves);
	}

	/**
	 * 构造函数
	 * 
	 * @param duration 动作持续时间
	 * @param gridSize 网格行列数
	 * @param amplitude 幅度
	 * @param waves 波浪数
	 */
	protected WavesTiles3D(float duration, WYGridSize gridSize, float amplitude, int waves) {
		nativeInit(duration, gridSize.x, gridSize.y, amplitude, waves);
	}
	
    /**
     * 从底层指针获得一个WavesTiles3D的Java对象
     * 
     * @param pointer 底层指针
     * @return {@link WavesTiles3D}
     */
    public static WavesTiles3D from(int pointer) {
    	return pointer == 0 ? null : new WavesTiles3D(pointer);
    }
	
	protected WavesTiles3D(int pointer) {
		super(pointer);
	}

	private native void nativeInit(float duration, int gridX, int gridY, float amplitude, int waves);

	@Override
	public TiledGrid3DAction copy() {
		return new WavesTiles3D(nativeCopy());
	}
}
