// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE060 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_584be060_584BE060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 0F 87 87 00 00 00: ja 0x584be102
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 2B: je 0x584be0b5
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A9 2F 37 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2f
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + eax*4], 1
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 74 2F 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2f
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        ; Exact mapped bytes E8 93 E7 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 4B: jmp 0x584be14d
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + edx*4], 1
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 27 2F 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2f
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + eax*4]
        push ecx
        ; Exact mapped bytes E8 46 E7 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe7
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
