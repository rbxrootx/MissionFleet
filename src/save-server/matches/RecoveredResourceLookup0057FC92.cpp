extern "C" void *ResourceAssertFile0067849C;
extern "C" void *ResourceIAT0068B7E4;
extern "C" void Recovered00528D40();
extern "C" void Recovered0057FBF6();
// Exact recovered resource-record lookup helper.
extern "C" __declspec(naked) void Recovered0057FC92()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp - 4], 0
loc_0057FCA2:
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_0057FD8B
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 4]
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Recovered0057FBF6
    __asm mov dword ptr [ebp - 0xc], eax
    __asm mov dword ptr [ebp - 0x10], 0
    __asm jmp loc_0057FCD3
loc_0057FCCA:
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm add eax, 1
    __asm mov dword ptr [ebp - 0x10], eax
loc_0057FCD3:
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm cmp ecx, dword ptr [ebp - 0xc]
    __asm jae loc_0057FD75
    __asm mov edx, dword ptr [ebp - 8]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx + 0xc]
    __asm cmp eax, 0xfff
    __asm je loc_0057FD67
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [edx]
    __asm push eax
    __asm call dword ptr [ResourceIAT0068B7E4]
    __asm test eax, eax
    __asm jne loc_0057FD67
    __asm mov ecx, dword ptr [ebp - 8]
    __asm cmp dword ptr [ecx + 4], -1
    __asm jne loc_0057FD5F
loc_0057FD0C:
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm add edx, 1
    __asm and edx, 0xffff
    __asm mov eax, dword ptr [ebp - 4]
    __asm and eax, 0xffff
    __asm shl eax, 0x10
    __asm or edx, eax
    __asm cmp edx, -1
    __asm jne loc_0057FD3E
    __asm push 0xd5
    __asm push offset ResourceAssertFile0067849C
    __asm call Recovered00528D40
    __asm test eax, eax
    __asm je loc_0057FD3E
    __asm _emit 0cch
loc_0057FD3E:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne loc_0057FD0C
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm add eax, 1
    __asm and eax, 0xffff
    __asm mov edx, dword ptr [ebp - 4]
    __asm and edx, 0xffff
    __asm shl edx, 0x10
    __asm or eax, edx
    __asm jmp loc_0057FD8E
loc_0057FD5F:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [eax + 4]
    __asm jmp loc_0057FD8E
loc_0057FD67:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm add ecx, 0x20
    __asm mov dword ptr [ebp - 8], ecx
    __asm jmp loc_0057FCCA
loc_0057FD75:
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ebp + 8], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp - 4], ecx
    __asm jmp loc_0057FCA2
loc_0057FD8B:
    __asm or eax, 0xffffffff
loc_0057FD8E:
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
