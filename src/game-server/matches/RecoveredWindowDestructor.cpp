// Exact x86 MFC window teardown, including SEH and global-window exemptions.
extern "C" char Handler0057CA0E;
extern "C" char Vtable00582EB0;
extern "C" char Global1005DE4C0;
extern "C" char Global2005DE480;
extern "C" char Global3005DE440;
extern "C" char Global4005DE400;
extern "C" char WarningText005C56FC;
extern "C" void Warn004CFC15();
extern "C" void DestroyWindow004F2DF2();
extern "C" void BaseDestroy004F7D3B();
extern "C" __declspec(naked) void Recovered004F272F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Handler0057CA0E
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm sub esp, 10h
    __asm mov dword ptr [ebp-18h], ecx
    __asm mov eax, dword ptr [ebp-18h]
    __asm mov dword ptr [eax], offset Vtable00582EB0
    __asm mov dword ptr [ebp-4], 0
    __asm mov ecx, dword ptr [ebp-18h]
    __asm cmp dword ptr [ecx+1ch], 0
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global1005DE4C0
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global2005DE480
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global3005DE440
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global4005DE400
    __asm je warning_done
    __asm push offset WarningText005C56FC
    __asm call Warn004CFC15
    __asm add esp, 4
    __asm mov ecx, dword ptr [ebp-18h]
    __asm call DestroyWindow004F2DF2
    __asm warning_done:
    __asm mov edx, dword ptr [ebp-18h]
    __asm mov eax, dword ptr [edx+34h]
    __asm mov dword ptr [ebp-14h], eax
    __asm mov ecx, dword ptr [ebp-14h]
    __asm mov dword ptr [ebp-10h], ecx
    __asm cmp dword ptr [ebp-10h], 0
    __asm je null_owned
    __asm push 1
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-10h]
    __asm call dword ptr [eax+4]
    __asm mov dword ptr [ebp-1ch], eax
    __asm jmp owned_done
    __asm null_owned:
    __asm mov dword ptr [ebp-1ch], 0
    __asm owned_done:
    __asm mov ecx, dword ptr [ebp-18h]
    __asm cmp dword ptr [ecx+38h], 0
    __asm je parent_done
    __asm mov edx, dword ptr [ebp-18h]
    __asm mov eax, dword ptr [edx+38h]
    __asm mov ecx, dword ptr [eax+24h]
    __asm cmp ecx, dword ptr [ebp-18h]
    __asm jne parent_done
    __asm mov edx, dword ptr [ebp-18h]
    __asm mov eax, dword ptr [edx+38h]
    __asm mov dword ptr [eax+24h], 0
    __asm parent_done:
    __asm mov dword ptr [ebp-4], -1
    __asm mov ecx, dword ptr [ebp-18h]
    __asm call BaseDestroy004F7D3B
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov dword ptr fs:[0], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
