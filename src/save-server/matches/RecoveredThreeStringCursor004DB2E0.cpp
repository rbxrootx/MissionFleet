int __cdecl Recovered004DBA90(void *);
// Exact recovered three-string encoded-record cursor.
extern "C" __declspec(naked) void Recovered004DB2E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call Recovered004DBA90
    __asm add esp, 4
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je compact
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 1ah
    __asm mov dword ptr [ebp-8], ecx
    __asm jmp first
    __asm compact:
    __asm mov edx, dword ptr [ebp+8]
    __asm add edx, 12h
    __asm mov dword ptr [ebp-8], edx
    __asm first:
    __asm mov eax, dword ptr [ebp-8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm cmp ecx, 0ffffh
    __asm jne first_scan
    __asm mov edx, dword ptr [ebp-8]
    __asm add edx, 4
    __asm mov dword ptr [ebp-8], edx
    __asm jmp second
    __asm first_scan:
    __asm mov eax, dword ptr [ebp-8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm mov edx, dword ptr [ebp-8]
    __asm add edx, 2
    __asm mov dword ptr [ebp-8], edx
    __asm test ecx, ecx
    __asm je second
    __asm jmp first_scan
    __asm second:
    __asm mov eax, dword ptr [ebp-8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm cmp ecx, 0ffffh
    __asm jne second_scan
    __asm mov edx, dword ptr [ebp-8]
    __asm add edx, 4
    __asm mov dword ptr [ebp-8], edx
    __asm jmp third
    __asm second_scan:
    __asm mov eax, dword ptr [ebp-8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm mov edx, dword ptr [ebp-8]
    __asm add edx, 2
    __asm mov dword ptr [ebp-8], edx
    __asm test ecx, ecx
    __asm je third
    __asm jmp second_scan
    __asm third:
    __asm mov eax, dword ptr [ebp-8]
    __asm xor ecx, ecx
    __asm mov cx, word ptr [eax]
    __asm mov edx, dword ptr [ebp-8]
    __asm add edx, 2
    __asm mov dword ptr [ebp-8], edx
    __asm test ecx, ecx
    __asm je done
    __asm jmp third
    __asm done:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
