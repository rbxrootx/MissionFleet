// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CCC60 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_004ccc60_004CCC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x4cccb3
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 F9 FF FF: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 69 86 F9 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 50 86 F9 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
