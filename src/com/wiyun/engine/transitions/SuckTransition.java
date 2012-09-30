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
package com.wiyun.engine.transitions;

import com.wiyun.engine.nodes.Scene;

/**
 * \if English
 * Transition which uses suck effect
 * \else
 * 使用吸入效果的转场类
 * \endif
 */
public class SuckTransition extends TransitionScene {
	/**
	 * \if English
	 * Static constructor
	 *
	 * @param duration transition duration time in seconds
	 * @param inScene the scene will be switched in. If not NULL, then out scene is current scene.
	 * 		If NULL, the out scene is not set also and somebody must set them after make returns. Generally
	 * 		you will set \c inScene NULL when uses popSceneWithTransition and \link Director Director\endlink
	 * 		will set in and out scene automatically.
	 * @param suckX x position of sucking
	 * @param suckY y position of sucking
	 * @return \link SuckTransition SuckTransition\endlink
	 * \else
	 * 静态构造函数
	 *
	 * @param duration 场景切换的时间
	 * @param inScene 准备载入的\link Scene Scene对象指针\endlink. 如果不为NULL, 则
	 * 		载出场景自动设置为当前场景. 如果为NULL, 则载入场景和载出场景都不设置. 需要在之后再
	 * 		自行设置. 一般如果是想在popScene的时候, 需要把这个参数设置为NULL, 这样\link Director Director\endlink
	 * 		会自动设置载入和载出场景.
	 * @param suckX 吸入点的x位置
	 * @param suckY 吸入点的y位置
	 * @return \link SuckTransition SuckTransition\endlink
	 * \endif
	 */
	public static SuckTransition make(float duration, Scene inScene, float suckX, float suckY) {
		return new SuckTransition(duration, inScene, suckX, suckY);
	}

	protected SuckTransition(float duration, Scene inScene, float suckX, float suckY) {
		nativeInit(duration, inScene, suckX, suckY);
	}
	
    /**
     * 从底层指针获得一个SuckTransition的Java对象
     * 
     * @param pointer 底层指针
     * @return {@link SuckTransition}
     */
    public static SuckTransition from(int pointer) {
    	return pointer == 0 ? null : new SuckTransition(pointer);
    }
    
    protected SuckTransition(int pointer) {
    	super(pointer);
    }
	
	private native void nativeInit(float duration, Scene inScene, float suckX, float suckY);
}
