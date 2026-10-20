// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508940 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_58508940_58508940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        push 0
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 07 28 00 00: call 0x5850b160
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 1B: jne 0x5850897d
        __asm _emit 0x75
        __asm _emit 0x1b
        push 588a3aa5h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 11 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        or eax, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 35: jmp 0x585089b2
        __asm _emit 0xeb
        __asm _emit 0x35
        push -1
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 17 28 00 00: call 0x5850b1a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6A 3B 00 00: call 0x5850c510
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
