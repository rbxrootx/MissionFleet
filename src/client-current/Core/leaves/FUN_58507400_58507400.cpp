// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507400 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58507400_58507400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 38: je 0x5850744a
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 4F 00 00: call 0x5850c370
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 C0 33 FA FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 70 3B 00 00: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x58507450
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
