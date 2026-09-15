// Exact x86 MFC window teardown, including SEH and global-window exemptions.
extern "C" char Handler0058C3FE;
extern "C" char Vtable00634DD0;
extern "C" char Global1006869D8;
extern "C" char Global200686998;
extern "C" char Global300686958;
extern "C" char Global400686918;
extern "C" char WarningText00671BEC;
extern "C" void Warn004A0615();
extern "C" void DestroyWindow004D0D22();
extern "C" void BaseDestroy004D6DDB();
extern "C" __declspec(naked) void Recovered004D065F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Handler0058C3FE
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm sub esp, 10h
    __asm mov dword ptr [ebp-18h], ecx
    __asm mov eax, dword ptr [ebp-18h]
    __asm mov dword ptr [eax], offset Vtable00634DD0
    __asm mov dword ptr [ebp-4], 0
    __asm mov ecx, dword ptr [ebp-18h]
    __asm cmp dword ptr [ecx+1ch], 0
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global1006869D8
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global200686998
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global300686958
    __asm je warning_done
    __asm cmp dword ptr [ebp-18h], offset Global400686918
    __asm je warning_done
    __asm push offset WarningText00671BEC
    __asm call Warn004A0615
    __asm add esp, 4
    __asm mov ecx, dword ptr [ebp-18h]
    __asm call DestroyWindow004D0D22
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
    __asm call BaseDestroy004D6DDB
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov dword ptr fs:[0], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
