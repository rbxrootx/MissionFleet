// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052271C .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_0052271c_0052271C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push 8
        ; Exact mapped bytes E8 B1 55 02 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D4 E7 5D 00 00: cmp dword ptr [0x5de7d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x522795
        __asm _emit 0x75
        __asm _emit 0x63
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x522744
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 17: jge 0x522761
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        and ecx, 1
        mov edx, 5555h
        shl edx, cl
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 54 45 E8: mov word ptr [ebp + eax*2 - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes EB DA: jmp 0x52273b
        __asm _emit 0xeb
        __asm _emit 0xda
        lea ecx, [ebp - 18h]
        push ecx
        push 1
        push 1
        push 8
        push 8
        ; Exact mapped bytes FF 15 9C 21 5E 00: call dword ptr [0x5e219c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x522795
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 8C 21 5E 00: call dword ptr [0x5e218c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 D4 E7 5D 00: mov dword ptr [0x5de7d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 E4 20 5E 00: call dword ptr [0x5e20e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 70 56 02 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 E7 5D 00: mov ecx, dword ptr [0x5de7d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 DA 42 01 00: call 0x536a82
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
