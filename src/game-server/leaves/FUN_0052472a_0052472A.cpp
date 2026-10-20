// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052472A .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_0052472a_0052472A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57da19h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 584f50h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 9F 8C FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 78h
        ; Exact mapped bytes E8 D0 90 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 4C 02 FC FF: call 0x4e49d7
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 95 DF FC FF: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
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
