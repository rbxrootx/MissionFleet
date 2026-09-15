// Exact x86 command-target teardown with SEH and debug refcount validation.
extern "C" char Handler0058C529;
extern "C" char Vtable00635610;
extern "C" char File006720F4;
extern "C" void Assert00528D40();
extern "C" void BaseDestroy005247A7();
extern "C" __declspec(naked) void Recovered004D6DDB()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Handler0058C529
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-10h], ecx
    __asm mov eax, dword ptr [ebp-10h]
    __asm mov dword ptr [eax], offset Vtable00635610
    __asm mov dword ptr [ebp-4], 0
    __asm mov ecx, dword ptr [ebp-10h]
    __asm cmp dword ptr [ecx+10h], 0
    __asm je map_done
    __asm mov ecx, dword ptr [ebp-10h]
    __asm add ecx, 10h
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [edx+10h]
    __asm call dword ptr [eax+1ch]
    __asm map_done:
    __asm check_refcount:
    __asm mov ecx, dword ptr [ebp-10h]
    __asm cmp dword ptr [ecx+4], 1
    __asm jle refcount_done
    __asm push 34h
    __asm push offset File006720F4
    __asm call Assert00528D40
    __asm test eax, eax
    __asm je refcount_done
    __asm int 3
    __asm refcount_done:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne check_refcount
    __asm mov dword ptr [ebp-4], -1
    __asm mov ecx, dword ptr [ebp-10h]
    __asm call BaseDestroy005247A7
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov dword ptr fs:[0], ecx
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
