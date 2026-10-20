// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044FE31 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0044fe31_0044FE31() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x44fe51
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 36: je 0x44fe87
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 0ch]
        and edx, 200h
        push edx
        push 2
        push 0fffffdf8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 74: call dword ptr [ecx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x74
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x44fe87
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        and ah, 0fdh
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ch, 0fdh
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 F8 F4 07 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
