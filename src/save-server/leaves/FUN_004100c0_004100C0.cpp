// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004100C0 .. +0x45B bytes.
extern "C" __declspec(naked) void FUN_004100c0_004100C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ac9ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 188h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 194h]
        mov ecx, 62h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 07: jne 0x41010b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F0 03 00 00: jmp 0x4104fb
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 F1 4B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4b
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 144h], 1
        mov dword ptr [ebp - 140h], 0
        mov dword ptr [ebp - 138h], 0
        mov dword ptr [ebp - 128h], 5
        mov dword ptr [ebp - 12ch], 3ch
        mov dword ptr [ebp - 13ch], 0
        mov dword ptr [ebp - 130h], 633e20h
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 B7 D1 09 00: call 0x4ad32f
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd1
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0f4h
        ; Exact mapped bytes E8 06 CF 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 63310ch
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 3F 4C 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 114h]
        mov dword ptr [ebp - 130h], eax
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 AD D0 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 2
        lea edx, [ebp - 11ch]
        push edx
        lea eax, [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 AC 01 00: call 0x42aec7
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        push 100h
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 96 CE 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 62 D0 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 3
        mov esi, esp
        push 0
        push 633e1ch
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 A9 4B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 114h]
        mov dword ptr [ebp - 130h], eax
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 17 D0 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 4
        mov esi, esp
        push 633e14h
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 60 4B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 114h]
        mov dword ptr [ebp - 130h], eax
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 CE CF 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 5
        mov dword ptr [ebp - 130h], 63315ch
        lea edx, [ebp - 144h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 A5 CF 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 6
        push 633e04h
        lea eax, [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D8 14 FF FF: call 0x4017d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 28 09 00: call 0x4a2bc9
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 154h]
        mov edx, dword ptr [ecx]
        push edx
        push 63310ch
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 C4 4A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 14ch]
        ; Exact mapped bytes E8 B5 C5 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc5
        __asm _emit 0x0b
        __asm _emit 0x00
        lea ecx, [ebp - 114h]
        mov dword ptr [ebp - 130h], ecx
        lea edx, [ebp - 144h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 27 CF 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xcf
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 7
        mov esi, esp
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 168h]
        push ecx
        push 633e1ch
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 66 4A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 E0 CE 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 8
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 16ch]
        push edx
        push 633e1ch
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 1F 4A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 99 CE 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 DB CE 09 00: call 0x4ad2d5
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A2 15 FF FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 0F FF FF: call 0x401384
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], 1
        ; Exact mapped bytes EB 0F: jmp 0x410426
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 148h]
        add eax, 1
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 A3 CD 09 00: call 0x4ad1d7
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        cmp dword ptr [ebp - 148h], eax
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x4104ce
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 140h], ecx
        mov dword ptr [ebp - 13ch], 0
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 5E 9F 09 00: call 0x4aa3d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2D 15 FF FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 04 0F FF FF: call 0x401384
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 1
        mov esi, esp
        push ecx
        push 633e1ch
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 48 49 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 114h]
        mov dword ptr [ebp - 130h], eax
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 B6 CD 09 00: call 0x4ad27f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x410417
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 29 0E FF FF: call 0x401302
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 F7 C3 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 150h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 194h
        cmp ebp, esp
        ; Exact mapped bytes E8 DB 48 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
