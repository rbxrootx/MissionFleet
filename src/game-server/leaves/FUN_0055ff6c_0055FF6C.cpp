// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FF6C .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0055ff6c_0055FF6C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 8], eax
        push 48dh
        push 5cff18h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 D2 B1 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 E0 00 00 00: call dword ptr [eax + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x55ffca
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 DF FD FF: call 0x53df09
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 BC FD FF: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [ebp + 0ch], 0
        sete cl
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
