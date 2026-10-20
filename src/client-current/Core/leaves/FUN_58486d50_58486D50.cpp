// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486D50 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58486d50_58486D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 23h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 77 06: ja 0x58486d6d
        __asm _emit 0x77
        __asm _emit 0x06
        ; Exact mapped bytes E8 04 12 00 00: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 6A 10 00 00: call 0x58487de0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 10: jne 0x58486d92
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 48 A2 3C 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x3c
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 23h
        and eax, 0ffffffe0h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        imul edx, ecx, -1
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + edx], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
    }
}
