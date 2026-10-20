// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420030 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00420030_00420030() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b589h
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
        sub esp, 70h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 7ch]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 C2 14 FE FF: call 0x401532
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes E8 38 11 FE FF: call 0x4011b8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        add esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 A2 14 FE FF: call 0x401532
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        add esi, eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 92 14 FE FF: call 0x401532
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        add esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 118h]
        ; Exact mapped bytes E8 82 14 FE FF: call 0x401532
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 14h], esi
        push 1dh
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 2E 18 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 4
        mov edx, dword ptr [ebp - 10h]
        add edx, 0e4h
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 30 0F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 1D 0F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 41 18 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 23 14 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 8002a002h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E A0 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 CC 18 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3ch]
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
        add esp, 7ch
        cmp ebp, esp
        ; Exact mapped bytes E8 AC 4C 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
