// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58744360 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58744360_58744360() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C B9 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb9
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x587443c6
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D B9 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb9
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 06 D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 75 1F: jne 0x587443bf
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 4B 2E D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 7d2h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 49 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x49
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x587443c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587443c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
