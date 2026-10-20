// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004990A0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_004990a0_004990A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BC 19 00 00: call 0x49aa70
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x4990d9
        __asm _emit 0x75
        __asm _emit 0x21
        push 5caed0h
        push 0
        push 412h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 60 7A 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4990d9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x4990ac
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 33: je 0x499122
        __asm _emit 0x74
        __asm _emit 0x33
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        add edx, 0ch
        push edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A 19 00 00: call 0x49aa80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
