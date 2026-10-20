// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FBD0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_5857fbd0_5857FBD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F 83 F0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 26 83 F0 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 34: je 0x5857fc47
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 E8 72 F0 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0A 00 F5 FF: call 0x584cfc50
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx*2]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*2]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
