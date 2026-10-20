// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534090 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_58534090_58534090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 28 F8 FF FF: call 0x58533900
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 108h], al
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 108h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5853410a
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 100h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], edx
        push 10h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 19 CF 2F 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcf
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 8
        push 0
        ; Exact mapped bytes E8 CD 3E 32 00: call 0x58857ff2
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3e
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
