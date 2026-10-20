// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE750 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_584ce750_584CE750() {
    __asm {
        push ebp
        mov ebp, esp
        push 58898734h
        ; Exact mapped bytes E8 93 38 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, 114h
        shl eax, 0
        add eax, 588f441ch
        push eax
        ; Exact mapped bytes E8 BC FF FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 58898750h
        ; Exact mapped bytes E8 6F 38 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, 114h
        shl ecx, 1
        add ecx, 588f441ch
        push ecx
        ; Exact mapped bytes E8 98 FF FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 5889876ch
        ; Exact mapped bytes E8 4B 38 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, 114h
        imul eax, edx, 3
        add eax, 588f441ch
        push eax
        ; Exact mapped bytes E8 74 FF FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 58898788h
        ; Exact mapped bytes E8 27 38 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, 114h
        shl ecx, 2
        add ecx, 588f441ch
        push ecx
        ; Exact mapped bytes E8 4F FF FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 588987a4h
        ; Exact mapped bytes E8 02 38 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, 114h
        imul eax, edx, 5
        add eax, 588f441ch
        push eax
        ; Exact mapped bytes E8 2B FF FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 588987c4h
        ; Exact mapped bytes E8 DE 37 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, 114h
        imul edx, ecx, 6
        add edx, 588f441ch
        push edx
        ; Exact mapped bytes E8 06 FF FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 588987e8h
        ; Exact mapped bytes E8 B9 37 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, 114h
        imul ecx, eax, 7
        add ecx, 588f441ch
        push ecx
        ; Exact mapped bytes E8 E1 FE FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 58898808h
        ; Exact mapped bytes E8 94 37 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, 114h
        shl edx, 3
        add edx, 588f441ch
        push edx
        ; Exact mapped bytes E8 BC FE FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 58898828h
        ; Exact mapped bytes E8 6F 37 05 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, 114h
        imul ecx, eax, 9
        add ecx, 588f441ch
        push ecx
        ; Exact mapped bytes E8 97 FE FF FF: call 0x584ce730
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop ebp
        ret
    }
}
