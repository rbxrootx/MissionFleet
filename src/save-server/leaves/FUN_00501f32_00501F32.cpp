// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501F32 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_00501f32_00501F32() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 419h
        push 675764h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 12 83 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 91 E9 FF FF: call 0x5008ef
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push 14h
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 93 33 F6 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov cl, byte ptr [ebp + 10h]
        mov byte ptr [ebp - 0bh], cl
        mov edx, dword ptr [ebp + 10h]
        shr edx, 10h
        and edx, 0ffffh
        mov byte ptr [ebp - 0ch], dl
        push 14h
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 30 7F F6 FF: call 0x469ed0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x501fc4
        __asm _emit 0x74
        __asm _emit 0x1d
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9B E9 FF FF: call 0x500952
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 84h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
