/*
	@file Scene.cpp
*/
#include "Scene.h"
#include <iostream>

/*
	コンストラクタ

	@param name シーン名
*/
Scene::Scene(const char* name) : name(name)
{

}

/*
	デストラクタ
*/
Scene::~Scene()
{
	Finalize();
}

/*
	シーンを活動状態にする
*/
void Scene::Play()
{
	isActive = true;
}

/*
	シーンを停止状態にする
*/
void Scene::Stop()
{
	isActive = false;
}

/*
	シーンを表示する
*/
void Scene::Show()
{
	isVisible = true;
}

/*
	シーンを非表示にする
*/
void Scene::Hide()
{
	isVisible = false;
}

/*
	シーン名を取得する

	@return シーン名
*/
const std::string& Scene::Name() const
{
	return name;
}

/*
	シーンの活動状態を調べる

	@retval treu	活動している
	@retval flase	停止している
*/
bool Scene::IsActive() const
{
	return IsActive;
}

/*
	シーンの表示状態を調べる

	@retval true	表示状態
	@retval false	非表示状態
*/
bool Scene::IsVisible() const
{
	return isVisible;
}