// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Selects the in-capacity append path or the vector-growth path.
// Indexed function extent: 0x58504C30 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58504c30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 17: je 0x58504c6c
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 52 26 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 FF FF FF: call 0x58504bb0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x58504c93
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3B 26 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 00 00 00: call 0x58504ca0
        __asm _emit 0xe8
        __asm _emit 0x0d
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
