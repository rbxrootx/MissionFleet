// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CC0C .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_0051cc0c_0051CC0C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push 8
        ; Exact mapped bytes E8 61 61 02 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 70 68 00 00: cmp dword ptr [0x6870a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x51cc85
        __asm _emit 0x75
        __asm _emit 0x63
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x51cc34
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 17: jge 0x51cc51
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
        ; Exact mapped bytes EB DA: jmp 0x51cc2b
        __asm _emit 0xeb
        __asm _emit 0xda
        lea ecx, [ebp - 18h]
        push ecx
        push 1
        push 1
        push 8
        push 8
        ; Exact mapped bytes FF 15 84 B6 68 00: call dword ptr [0x68b684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x51cc85
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F8 B5 68 00: call dword ptr [0x68b5f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 A0 70 68 00: mov dword ptr [0x6870a0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 30 B6 68 00: call dword ptr [0x68b630]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 20 62 02 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A0 70 68 00: mov ecx, dword ptr [0x6870a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 42 62 01 00: call 0x532eda
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
