// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004421C5 .. +0x350 bytes.
extern "C" __declspec(naked) void FUN_004421c5_004421C5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aec6h
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
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 66h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 E2 0A 00: call 0x4f04c7
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a4h
        ; Exact mapped bytes E8 53 FB 03 00: call 0x481d60
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 144h
        ; Exact mapped bytes E8 E8 EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 148h
        ; Exact mapped bytes E8 D6 EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14ch
        ; Exact mapped bytes E8 C4 EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 B2 EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 154h
        ; Exact mapped bytes E8 A0 EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 158h
        ; Exact mapped bytes E8 8E EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15ch
        ; Exact mapped bytes E8 7C EC 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 160h
        ; Exact mapped bytes E8 11 8F 09 00: call 0x4db1ae
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 19ch
        ; Exact mapped bytes E8 E8 D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1d8h
        ; Exact mapped bytes E8 D6 D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 214h
        ; Exact mapped bytes E8 C4 D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 250h
        ; Exact mapped bytes E8 B2 D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28ch
        ; Exact mapped bytes E8 A0 D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2c8h
        ; Exact mapped bytes E8 8E D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0fh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 304h
        ; Exact mapped bytes E8 7C D3 0F 00: call 0x53f697
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 10h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 340h
        ; Exact mapped bytes E8 94 53 09 00: call 0x4d76c1
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 11h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 37ch
        ; Exact mapped bytes E8 82 53 09 00: call 0x4d76c1
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x53
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 12h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3b8h
        ; Exact mapped bytes E8 30 C5 0F 00: call 0x53e881
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 13h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 5818b0h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3f4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3f8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3fch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 400h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 404h], 1f43h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 408h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40ch], 3e8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 410h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 414h], 50h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 418h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 41ch], 14h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 420h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 424h], 1ch
        push 6ch
        ; Exact mapped bytes E8 F2 30 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A F9 0F 00: call 0x541d6f
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 428h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 414h]
        mov dword ptr [eax + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 40 70 00 00: mov word ptr [eax + 0x70], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 15h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 6fh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a4h
        ; Exact mapped bytes E8 DF BA 0F 00: call 0x53dfc0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a4h
        ; Exact mapped bytes E8 3E CE 0A 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0x00
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 D1 62 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x62
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
