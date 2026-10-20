// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58689F90 .. +0x32A bytes.
extern "C" __declspec(naked) void FUN_58689f90_58689F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 BF DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 09 BF DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4A 58 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x58
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2B 58 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x58
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC BE DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8D BE DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 20h], eax
        push 24h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CE 57 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x57
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 24h], eax
        push 24h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AF 57 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x57
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c0h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 30 BE DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c0h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 11 BE DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbe
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 52 57 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x57
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 33 57 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x57
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B4 BD DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 95 BD DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 40h], ecx
        push 24h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D6 56 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 44h], ecx
        push 24h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B7 56 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 41 BD DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xbd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8B 56 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 15 BD DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5F 56 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 58h], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E9 BC DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 33 56 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 BD BC DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xbc
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 64h], edx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 07 56 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E8 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C9 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 AA 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 8B 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
