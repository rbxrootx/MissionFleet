// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58635240 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_58635240_58635240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x5863539c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5863526b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 27 01 00 00: jge 0x5863539c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 ED B9 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb9
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 29 81 ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x81
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 83 A8 00 00 00: jae 0x58635348
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 52 89 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [eax + edx*4 + 180h]
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x58635311
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 35 89 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [eax + edx*4 + 182h]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x58635311
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0b8h]
        mov dword ptr [ebp - 10h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 0C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 82 0C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x58635346
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 18h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 65 0C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0b8h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4B 0C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x58635397
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2E 0C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0b8h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 14 0C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d0h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FA 0B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C6 FE FF FF: jmp 0x58635262
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
