// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407F70 .. +0x48F bytes.
extern "C" __declspec(naked) void FUN_00407f70_00407F70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 4397e1h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 A5 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 03 C3 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 F1 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 DF C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 CD C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 BB C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 134h
        ; Exact mapped bytes E8 49 55 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 138h
        ; Exact mapped bytes E8 9B C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 89 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 140h
        ; Exact mapped bytes E8 77 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 144h
        ; Exact mapped bytes E8 05 55 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 148h
        ; Exact mapped bytes E8 F7 54 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 49 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 154h
        ; Exact mapped bytes E8 37 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 158h
        ; Exact mapped bytes E8 25 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15ch
        ; Exact mapped bytes E8 13 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 160h
        ; Exact mapped bytes E8 01 C2 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 164h
        ; Exact mapped bytes E8 EF C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 168h
        ; Exact mapped bytes E8 DD C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0fh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 16ch
        ; Exact mapped bytes E8 CB C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 10h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 170h
        ; Exact mapped bytes E8 B9 C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 11h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 174h
        ; Exact mapped bytes E8 A7 C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 12h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 178h
        ; Exact mapped bytes E8 95 C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 13h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 17ch
        ; Exact mapped bytes E8 23 54 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 180h
        ; Exact mapped bytes E8 75 C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 14h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 188h
        ; Exact mapped bytes E8 63 C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 15h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 51 C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 16h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 190h
        ; Exact mapped bytes E8 3F C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 17h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 194h
        ; Exact mapped bytes E8 2D C1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 18h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 198h
        ; Exact mapped bytes E8 BB 53 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43c938h
        push 44da5ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 83 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da60h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 70 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da64h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 5D 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da68h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 4A 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da6ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 37 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da70h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 138h
        ; Exact mapped bytes E8 24 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da74h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 11 5B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da78h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 140h
        ; Exact mapped bytes E8 FE 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14ch], 0
        push 44da7ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 DE 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da80h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 154h
        ; Exact mapped bytes E8 CB 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da84h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 158h
        ; Exact mapped bytes E8 B8 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da88h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15ch
        ; Exact mapped bytes E8 A5 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da8ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 160h
        ; Exact mapped bytes E8 92 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da90h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 164h
        ; Exact mapped bytes E8 7F 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da94h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 168h
        ; Exact mapped bytes E8 6C 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da98h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 16ch
        ; Exact mapped bytes E8 59 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da9ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 170h
        ; Exact mapped bytes E8 46 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44daa0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 174h
        ; Exact mapped bytes E8 33 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44daa4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 178h
        ; Exact mapped bytes E8 20 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44daa8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 180h
        ; Exact mapped bytes E8 0D 5A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 184h], 0
        push 44daach
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 188h
        ; Exact mapped bytes E8 ED 59 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dab0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18ch
        ; Exact mapped bytes E8 DA 59 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dab4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 190h
        ; Exact mapped bytes E8 C7 59 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dab8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 194h
        ; Exact mapped bytes E8 B4 59 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 19ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], 21h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 118h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 11ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 114h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 110h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
