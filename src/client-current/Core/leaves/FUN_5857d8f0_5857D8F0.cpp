// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D8F0 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_5857d8f0_5857D8F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 70: jne 0x5857d975
        __asm _emit 0x75
        __asm _emit 0x70
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 2B: jne 0x5857d94d
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 70 F0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5857d94d
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 70 F0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 70 F0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        mov dword ptr [ebp - 8], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 80011002h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 F0 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 134h], 400h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
