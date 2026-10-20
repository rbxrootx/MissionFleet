// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055EE4C .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0055ee4c_0055EE4C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 38ah
        push 67b3b8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FA B3 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b4h
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 84h
        push edx
        ; Exact mapped bytes E8 31 9F EF FF: call 0x458db0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9f
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x55eeae
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x55ee9a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 16: jmp 0x55eeb0
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x55eeae
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 02: jmp 0x55eeb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
