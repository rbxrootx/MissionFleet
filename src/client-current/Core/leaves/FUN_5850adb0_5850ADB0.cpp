// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850ADB0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5850adb0_5850ADB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4C C1 F7 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x5850add2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 1D: je 0x5850adf7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 B3 5A 32 00: call 0x588308a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5a
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB D2: jmp 0x5850adc9
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
