// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58674010 .. +0x3178 bytes.
extern "C" __declspec(naked) void FUN_58674010_58674010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 250h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 31 E6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x31
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0eh
        ; Exact mapped bytes 0F 87 E5 2F 00 00: ja 0x58677020
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 24 8D 88 71 67 58: jmp dword ptr [ecx*4 + 0x58677188]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x71
        __asm _emit 0x67
        __asm _emit 0x58
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 29 18 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 46: jne 0x586740b4
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674080
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x586740b4
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 240h], eax
        push 1
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 2F 1E E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1e
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58674077
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586740c6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 30: jge 0x586740fc
        __asm _emit 0x7d
        __asm _emit 0x30
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 44h], ecx
        push 0feh
        push 0aah
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 27 15 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C1: jmp 0x586740bd
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 48h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 87 14 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 4ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5A 14 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x58674169
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 62: jge 0x586741d1
        __asm _emit 0x7d
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 04 17 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x17
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 3B: jne 0x586741cf
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586741a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x586741cf
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 14 1D E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5867419d
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 8F: jmp 0x58674160
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586741e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 62: jge 0x5867424b
        __asm _emit 0x7d
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 8A 16 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 3B: jne 0x58674249
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674220
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58674249
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9A 1C E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1c
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58674217
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 8F: jmp 0x586741da
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes E9 D0 2D 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 08 50 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x50
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 0F 85 70 02 00 00: jne 0x586744d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 F3 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 1
        ; Exact mapped bytes 0F 85 5C 02 00 00: jne 0x586744d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867428a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 47 01 00 00: jge 0x586743db
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 DF 15 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x58674348
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586742ce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x586742f7
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 EC 1B E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586742c5
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 5ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 91 12 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 60h], eax
        push 101h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 69 12 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 45: jne 0x58674393
        __asm _emit 0x75
        __asm _emit 0x45
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674360
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2B: jge 0x58674391
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 64h], eax
        push 102h
        push 0a5h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 92 12 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C6: jmp 0x58674357
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes EB 43: jmp 0x586743d6
        __asm _emit 0xeb
        __asm _emit 0x43
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586743a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2B: jge 0x586743d6
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 68h], eax
        push 181h
        push 202h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 4D 12 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C6: jmp 0x5867439c
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes E9 A6 FE FF FF: jmp 0x58674281
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 09: jmp 0x586743ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 62: jge 0x58674455
        __asm _emit 0x7d
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 80 14 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 3B: jne 0x58674453
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867442a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58674453
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 90 1A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58674421
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 8F: jmp 0x586743e4
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58674467
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 62: jge 0x586744cf
        __asm _emit 0x7d
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 06 14 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x14
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 3B: jne 0x586744cd
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586744a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x586744cd
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 16 1A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5867449b
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 8F: jmp 0x5867445e
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x586745b5
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586744e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x586745b5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 83 13 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 3B: jne 0x58674550
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674527
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58674550
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 74h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 93 19 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x19
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5867451e
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 23 13 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 3B: jne 0x586745b0
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674587
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x586745b0
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 33 19 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5867457e
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x586744dd
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 66 2A 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E 4C E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 45 02 00 00: jne 0x58674813
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9A EF FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 1
        ; Exact mapped bytes 0F 85 31 02 00 00: jne 0x58674813
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 EF FF FF: call 0x58673590
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 0F 85 1D 02 00 00: jne 0x58674813
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 78 12 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 40: jne 0x5867465f
        __asm _emit 0x75
        __asm _emit 0x40
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674631
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 28: jge 0x5867465f
        __asm _emit 0x7d
        __asm _emit 0x28
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 7ch], edx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 84 18 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C9: jmp 0x58674628
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674671
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 30: jge 0x586746a7
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 80h], eax
        push 0cbh
        push 189h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 7C 0F 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C1: jmp 0x58674668
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 84h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D6 0E 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 244h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 88h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 A3 0E 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58674720
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x5867478e
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 4D 11 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x5867478c
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867475d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867478c
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 57 17 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674754
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58674717
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x586747a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x5867480e
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 CD 10 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x5867480c
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586747dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867480c
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 D7 16 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x16
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586747d4
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58674797
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58674900
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58674825
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x58674900
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 44 10 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58674895
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674866
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674895
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 4E 16 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x5867485d
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 DE 0F E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x586748fb
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586748cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586748fb
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E8 15 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586748c3
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x5867481c
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1B 27 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 69 0F E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 46: jne 0x58674974
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674940
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x58674974
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 9ch], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 6F 15 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58674937
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674986
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 36: jge 0x586749c2
        __asm _emit 0x7d
        __asm _emit 0x36
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0a0h], ecx
        push 1d9h
        push 284h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 61 0C 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x5867497d
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0a4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 BB 0B 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0b
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0a8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 88 0B 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58674a3b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x58674baa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 2E 0E E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x58674b0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674a7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674aae
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0ach], eax
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 35 14 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674a76
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0b0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 D4 0A 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0b4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 A6 0A 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4B: jne 0x58674b5c
        __asm _emit 0x75
        __asm _emit 0x4b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674b23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x58674b5a
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0b8h], edx
        push 148h
        push 295h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 C9 0A 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58674b1a
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB 49: jmp 0x58674ba5
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674b6e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x58674ba5
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0bch], edx
        push 202h
        push 2e5h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 7E 0A 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58674b65
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes E9 88 FE FF FF: jmp 0x58674a32
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x58674bbc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58674c2a
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 B1 0C E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58674c28
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674bf9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674c28
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 BB 12 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674bf0
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58674bb3
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 09: jmp 0x58674c3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58674caa
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 31 0C E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58674ca8
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674c79
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674ca8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 3B 12 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674c70
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58674c33
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 71 23 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 24 E6 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x24
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 24 E6 FF: call 0x584d7110
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 45 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 0F 85 26 02 00 00: jne 0x58674efa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 9A 0B E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x58674d43
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674d0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x58674d43
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0c8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 A0 11 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x11
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58674d06
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674d55
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 33: jge 0x58674d8e
        __asm _emit 0x7d
        __asm _emit 0x33
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0cch], edx
        push 32h
        push 17ch
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 95 08 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BE: jmp 0x58674d4c
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0d0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 EF 07 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 244h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0d4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 BC 07 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58674e07
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58674e75
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 66 0A E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58674e73
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674e44
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674e73
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 70 10 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674e3b
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58674dfe
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x58674e87
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58674ef5
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 E6 09 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58674ef3
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674ec4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674ef3
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0dch], edx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 F0 0F E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674ebb
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58674e7e
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58674fe7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58674f0c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x58674fe7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 5D 09 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58674f7c
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674f4d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674f7c
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 67 0F E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674f44
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 F7 08 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58674fe2
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58674fb3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58674fe2
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 01 0F E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58674faa
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x58674f03
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 34 20 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 F9 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 6D 08 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 46: jne 0x58675070
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867503c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x58675070
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 73 0E E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58675033
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675082
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 36: jge 0x586750be
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0ech], eax
        push 1d9h
        push 284h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 65 05 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x58675079
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0f0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 BF 04 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0f4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 8C 04 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 9E 02 00 00: je 0x586753cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58675141
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 17 75 E8 FF: call 0x584fc660
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x75
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F 8D 7C 01 00 00: jge 0x586752ce
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 1F E6 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 CE 74 E8 FF: call 0x584fc640
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8C A9 E3 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa9
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 3D 01 00 00: jne 0x586752c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 E7 06 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 41: jne 0x586751f1
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586751c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586751f1
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 F2 0C E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0c
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586751b9
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 04 F8 E0 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, 1ah
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 2ch]
        sub edx, 6ch
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867522b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2B: jge 0x5867525c
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 104h], edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 D7 A1 E2 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C6: jmp 0x58675222
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 108h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 26 03 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 10ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 F8 02 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 75 02: jne 0x586752c9
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x586752ce
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6A FE FF FF: jmp 0x58675138
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x586752e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x5867534e
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 8D 05 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x5867534c
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867531d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867534c
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 110h], ecx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 97 0B E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675314
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x586752d7
        __asm _emit 0xeb
        __asm _emit 0x89
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x5867535f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x586753cd
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 0E 05 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x586753cb
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867539c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586753cb
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 114h], eax
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 18 0B E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675393
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58675356
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 4E 1C 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 F5 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 05: jne 0x586753eb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 35 1C 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1D 28 E1 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 78 04 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 46: jne 0x58675465
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675431
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x58675465
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 118h], edx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 7E 0A E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58675428
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 E0 FF FF: call 0x58673540
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 248h], ecx
        mov dword ptr [ebp - 244h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675493
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 50: jge 0x586754e9
        __asm _emit 0x7d
        __asm _emit 0x50
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BF 51 0C: movsx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 244h]
        lea ecx, [eax + edx - 62h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BF 42 0A: movsx eax, word ptr [edx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 248h]
        lea edx, [ecx + eax - 1ah]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 3A 01 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A1: jmp 0x5867548a
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 120h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 94 00 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 124h], eax
        push 101h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 61 00 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 E0 FF FF: call 0x586735d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE 3C E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3c
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 75: jne 0x586755df
        __asm _emit 0x75
        __asm _emit 0x75
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 04 03 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 46: jne 0x586755da
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586755a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x586755da
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 128h], ecx
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 09 09 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x5867559d
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x586756ec
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 8F 02 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x586756ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867561e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 61: jge 0x58675685
        __asm _emit 0x7d
        __asm _emit 0x61
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 12ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 91 08 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 130h], eax
        push 148h
        push 2c3h
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 9E FF 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 90: jmp 0x58675615
        __asm _emit 0xeb
        __asm _emit 0x90
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 134h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 F8 FE 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 138h], edx
        push 101h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 C5 FE 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 09: jmp 0x586756fe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x5867576c
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 6F 01 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x5867576a
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867573b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867576a
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 13ch], eax
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 79 07 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675732
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x586756f5
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867577e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x586757ec
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 EF 00 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x586757ea
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586757bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586757ea
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 140h], ecx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 F9 06 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586757b2
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58675775
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 2F 18 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 3A E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 0F 85 9A 02 00 00: jne 0x58675a9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 DD FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 0F 85 86 02 00 00: jne 0x58675a9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867582b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x5867599a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 3E 00 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x586758fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867586f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867589e
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 144h], ecx
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 45 06 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675866
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 148h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 E4 FC 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 14ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 B6 FC 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4B: jne 0x5867594c
        __asm _emit 0x75
        __asm _emit 0x4b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675913
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x5867594a
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 150h], eax
        push 133h
        push 0d8h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 D9 FC 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x5867590a
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB 49: jmp 0x58675995
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867595e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x58675995
        __asm _emit 0x7d
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 154h], eax
        push 181h
        push 202h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 8E FC 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58675955
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes E9 88 FE FF FF: jmp 0x58675822
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 09: jmp 0x586759ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58675a1a
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 C1 FE E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58675a18
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586759e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675a18
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 158h], ecx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 CB 04 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586759e0
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x586759a3
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58675a2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58675a9a
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 41 FE E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58675a98
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675a69
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675a98
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 15ch], edx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 4B 04 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675a60
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58675a23
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58675b8c
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58675ab1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x58675b8c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 B8 FD E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58675b21
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675af2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675b21
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 C2 03 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675ae9
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 52 FD E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58675b87
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675b58
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675b87
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 164h], eax
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 5C 03 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675b4f
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x58675aa8
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8F 14 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C7 36 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x36
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 9A 02 00 00: jne 0x58675e3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 D9 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 2
        ; Exact mapped bytes 0F 85 86 02 00 00: jne 0x58675e3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58675bcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x58675d3a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 9E FC E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x58675c9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675c0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675c3e
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 A5 02 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675c06
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 16ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 44 F9 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 170h], edx
        push 101h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 16 F9 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4B: jne 0x58675cec
        __asm _emit 0x75
        __asm _emit 0x4b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675cb3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x58675cea
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 174h], edx
        push 15bh
        push 0d8h
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 39 F9 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58675caa
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB 49: jmp 0x58675d35
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675cfe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x58675d35
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 178h], edx
        push 181h
        push 202h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 EE F8 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58675cf5
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes E9 88 FE FF FF: jmp 0x58675bc2
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 09: jmp 0x58675d4c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58675dba
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 21 FB E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58675db8
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675d89
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675db8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 17ch], eax
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 2B 01 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675d80
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58675d43
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58675dcc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58675e3a
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 A1 FA E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58675e38
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675e09
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675e38
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 180h], ecx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 AB 00 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675e00
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58675dc3
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58675f2c
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58675e51
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x58675f2c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 18 FA E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58675ec1
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675e92
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675ec1
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 184h], edx
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 22 00 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675e89
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 B2 F9 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58675f27
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675ef8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675f27
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 188h], edx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 BC FF E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675eef
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x58675e48
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EF 10 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 33 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x33
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 0F 85 9A 02 00 00: jne 0x586761df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 23 D6 FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 86 02 00 00: jne 0x586761df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58675f6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x586760da
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 FE F8 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x5867603b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58675faf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58675fde
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 18ch], edx
        push 1
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 05 FF E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58675fa6
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 190h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 A4 F5 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 194h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 76 F5 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 4B: jne 0x5867608c
        __asm _emit 0x75
        __asm _emit 0x4b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676053
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x5867608a
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 198h], ecx
        push 0fbh
        push 0d8h
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 99 F5 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x5867604a
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB 49: jmp 0x586760d5
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867609e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 31: jge 0x586760d5
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 19ch], ecx
        push 181h
        push 202h
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 4E F5 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C0: jmp 0x58676095
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes E9 88 FE FF FF: jmp 0x58675f62
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 09: jmp 0x586760ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x5867615a
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 81 F7 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58676158
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676129
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676158
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 8B FD E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676120
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x586760e3
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5867616c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x586761da
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 01 F7 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x586761d8
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586761a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586761d8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 0B FD E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586761a0
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676163
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x586762cc
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586761f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x586762cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 78 F6 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58676261
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676232
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676261
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 82 FC E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676229
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 12 F6 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x586762c7
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676298
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586762c7
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 1C FC E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x5867628f
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x586761e8
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F 0D 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 9D F5 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf5
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 46: jne 0x58676340
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867630c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x58676340
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 A3 FB E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58676303
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676352
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 36: jge 0x5867638e
        __asm _emit 0x7d
        __asm _emit 0x36
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1b4h], ecx
        push 112h
        push 227h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 95 F2 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x58676349
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 1b8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 EF F1 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1bch], edx
        push 101h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 BC F1 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf1
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x58676407
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58676475
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 66 F4 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf4
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58676473
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676444
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676473
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 70 FA E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x5867643b
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x586763fe
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58676487
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x586764f5
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 E6 F3 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x586764f3
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586764c4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586764f3
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 F0 F9 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586764bb
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x5867647e
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 26 0B 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B E4 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 05: jne 0x58676513
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 0D 0B 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F5 16 E1 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58676537
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A1 E4 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 0F 8D 90 01 00 00: jge 0x586766e7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 81 E4 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe4
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 1ch]
        shr edx, cl
        and edx, dword ptr [eax + 268h]
        ; Exact mapped bytes 0F 85 6D 01 00 00: jne 0x586766e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BF 6A E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 51 01 00 00: jne 0x586766da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC CF FF FF: call 0x58673540
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 250h], ecx
        mov dword ptr [ebp - 24ch], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586765b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 53: jge 0x58676610
        __asm _emit 0x7d
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1c8h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 54 41 4E: movsx edx, word ptr [ecx + eax*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 24ch]
        lea ecx, [eax + edx - 53h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BF 4C 50 0E: movsx ecx, word ptr [eax + edx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x50
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 250h]
        lea eax, [edx + ecx - 1ah]
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 13 F0 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf0
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 9E: jmp 0x586765ae
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 63 F2 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x58676675
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676646
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676675
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1cch], eax
        push 1
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 6E F8 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x5867663d
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1d0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 0D EF 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1d4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 DF EE 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 75 02: jne 0x586766e2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x586766e7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 47 FE FF FF: jmp 0x5867652e
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586766f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58676767
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 74 F1 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58676765
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676736
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676765
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 7E F7 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x5867672d
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x586766f0
        __asm _emit 0xeb
        __asm _emit 0x89
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x58676778
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x586767e6
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 F5 F0 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x586767e4
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586767b5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x586767e4
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1dch], eax
        push 0
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 FF F6 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf6
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586767ac
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x5867676f
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 35 08 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 83 F0 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 46: jne 0x5867685a
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676826
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x5867685a
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1e0h], edx
        push 1
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 89 F6 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf6
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x5867681d
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867686c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 36: jge 0x586768a8
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1e4h], eax
        push 180h
        push 225h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 7B ED 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xed
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BB: jmp 0x58676863
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 1e8h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 D5 EC 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 1ech], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 A2 EC 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xec
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x58676921
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x5867698f
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 4C EF E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x5867698d
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867695e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867698d
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 56 F5 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf5
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676955
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676918
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586769a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58676a0f
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 CC EE E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58676a0d
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586769de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676a0d
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 D6 F4 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf4
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586769d5
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676998
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 0C 06 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 28 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 E5 02 00 00: jne 0x58676d0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 40 CB FF FF: call 0x58673570
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 0bh
        ; Exact mapped bytes 0F 85 D1 02 00 00: jne 0x58676d0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58676a4e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 67: jge 0x58676abb
        __asm _emit 0x7d
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 1F EE E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xee
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x58676ab9
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676a8a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676ab9
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 2A F4 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676a81
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 8A: jmp 0x58676a45
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676acd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x58676b75
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1fch], ecx
        push 0fbh
        push 0d8h
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 16 EB 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 200h], eax
        push 87h
        push 26ah
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 E3 EA 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xea
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 204h], edx
        push 181h
        push 202h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 B1 EA 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xea
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58676ac4
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676b87
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 7B: jge 0x58676c08
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58676b9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 5E: jge 0x58676c03
        __asm _emit 0x7d
        __asm _emit 0x5e
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2C: jne 0x58676bd7
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 208h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 DC E9 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58676c01
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 20ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 B0 E9 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 93: jmp 0x58676b96
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x58676b7e
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 09: jmp 0x58676c1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58676c88
        __asm _emit 0x7d
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 53 EC E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xec
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 41: jne 0x58676c86
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676c57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676c86
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 210h], eax
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 5D F2 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf2
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676c4e
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676c11
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58676c9a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58676d08
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 D3 EB E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58676d06
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676cd7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676d06
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 214h], ecx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 DD F1 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676cce
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676c91
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x58676dfa
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58676d1f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x58676dfa
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 4A EB E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58676d8f
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676d60
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676d8f
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 218h], edx
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 54 F1 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676d57
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 E4 EA E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58676df5
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676dc6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676df5
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 21ch], edx
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 EE F0 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf0
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676dbd
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x58676d16
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 02 00 00: jmp 0x58677020
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 6F EA E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x58676e6e
        __asm _emit 0x75
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676e3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 2E: jge 0x58676e6e
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 220h], ecx
        push 1
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 75 F0 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf0
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C3: jmp 0x58676e31
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676e80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 33: jge 0x58676eb9
        __asm _emit 0x7d
        __asm _emit 0x33
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 224h], edx
        push 18ch
        push 2dh
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 6A E7 13 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BE: jmp 0x58676e77
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 214h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 228h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 C4 E6 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe6
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 214h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 22ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 91 E6 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe6
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x58676f32
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58676fa0
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 214h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 3B E9 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58676f9e
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676f6f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58676f9e
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 230h], ecx
        push 0
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 45 EF E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676f66
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676f29
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58676fb2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58677020
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 BB E8 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x5867701e
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58676fef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x5867701e
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 234h], edx
        push 0
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 C5 EE E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xee
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58676fe6
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x58676fa9
        __asm _emit 0xeb
        __asm _emit 0x89
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp eax, 1
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        cmp ecx, 2
        ; Exact mapped bytes 0F 84 48 01 00 00: je 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        cmp edx, 7
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp eax, 9
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        cmp edx, 0dh
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA 21 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x58677182
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58677094
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58677102
        __asm _emit 0x7d
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 244h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 D9 E7 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 41: jne 0x58677100
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586770d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58677100
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 238h], ecx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 E3 ED E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xed
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586770c8
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x5867708b
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58677114
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 68: jge 0x58677182
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 59 E7 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58677180
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58677151
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 29: jge 0x58677180
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 214h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 23ch], edx
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 63 ED E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x58677148
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 89: jmp 0x5867710b
        __asm _emit 0xeb
        __asm _emit 0x89
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
