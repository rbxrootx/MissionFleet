// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867BF00 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_5867bf00_5867BF00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC AA E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xaa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 05 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 11 E1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 AA E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 68 F5 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 D0: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 AA E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xaa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 56 94 F8 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 C8: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        movzx edx, word ptr [ebp - 8]
        movzx eax, word ptr [ebp - 0ch]
        lea ecx, [eax + edx*2]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, word ptr [ebp - 4]
        cmp edx, 5
        ; Exact mapped bytes 75 06: jne 0x5867bf8f
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 2B: jmp 0x5867bfb8
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes EB 29: jmp 0x5867bfb8
        __asm _emit 0xeb
        __asm _emit 0x29
        movzx eax, word ptr [ebp - 4]
        cmp eax, 6
        ; Exact mapped bytes 75 1E: jne 0x5867bfb6
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        shl ecx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 DE 97 F8 FF: call 0x58605790
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5867bfb8
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5867bfb8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
