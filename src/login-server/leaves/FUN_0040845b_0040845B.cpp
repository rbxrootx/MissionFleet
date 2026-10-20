// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040845B .. +0x3FC bytes.
extern "C" __declspec(naked) void FUN_0040845b_0040845B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 DB FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 120h
        push eax
        push 4490a0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4A D3 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 124h
        push edx
        push 4490a8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 29 D3 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        push ecx
        push 4490b4h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 08 D3 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 12ch
        push eax
        push 4490c0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E8 D2 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 130h
        push edx
        push 4490c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C7 D2 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 134h
        push ecx
        push 4490d0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C4 D9 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 138h
        push eax
        push 4490d8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8F D2 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 13ch
        push edx
        push 4490e0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6E D2 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 140h
        push ecx
        push 4490e8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 4D D2 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 144h
        push eax
        push 4490f4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4B D9 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 148h
        push edx
        push 449100h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 33 D9 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14ch
        push ecx
        push 44910ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C1 D5 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 150h
        push eax
        push 449114h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E6 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 154h
        push edx
        push 44911ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C5 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 158h
        push ecx
        push 449128h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A4 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 15ch
        push eax
        push 449130h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 84 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 160h
        push edx
        push 44913ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 63 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 164h
        push ecx
        push 449148h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 42 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 168h
        push eax
        push 449154h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 22 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 16ch
        push edx
        push 449160h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 01 D1 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 170h
        push ecx
        push 44916ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E0 D0 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 174h
        push eax
        push 449178h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 D0 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 178h
        push edx
        push 449184h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9F D0 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 17ch
        push ecx
        push 449190h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9C D7 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 180h
        push eax
        push 44919ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 67 D0 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 184h
        push edx
        push 4491a8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0A D4 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 188h
        push ecx
        push 4491b4h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2E D0 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 18ch
        push eax
        push 4491c0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0E D0 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 190h
        push edx
        push 4491cch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 ED CF 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 194h
        push ecx
        push 4491dch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CC CF 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 198h
        push eax
        push 4491e8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 CA D6 00 00: call 0x415eeb
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 19ch
        push edx
        push 4491f8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 58 D3 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1a0h
        push ecx
        push 449204h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 61 D4 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd4
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
