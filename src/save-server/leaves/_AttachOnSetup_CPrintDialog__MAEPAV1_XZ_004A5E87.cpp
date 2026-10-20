// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5E87 .. +0xB4 bytes.
extern "C" __declspec(naked) void _AttachOnSetup_CPrintDialog__MAEPAV1_XZ_004A5E87() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fe5ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        mov dword ptr [ebp - 1ch], ecx
        push 0e7h
        push 67d5f0h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 A8 43 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        push 0ebh
        push 67d5f0h
        push 0a4h
        ; Exact mapped bytes E8 33 62 02 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 14: je 0x4a5ef0
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 70 FF FF FF: call 0x4a5e5b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x4a5ef7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 7009h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
