// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410F40 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00410f40_00410F40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579a92h
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
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 5810a8h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 7B C4 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        ; Exact mapped bytes E8 54 06 00 00: call 0x4115f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10h
        ; Exact mapped bytes E8 C2 04 00 00: call 0x411470
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 1E 78 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
