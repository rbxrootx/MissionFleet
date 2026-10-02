// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Initializes the line-record parser and delegates buffer splitting to 0x58797CE0.
// Indexed function extent: 0x58797A90 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58797a90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891500h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b6c88h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 FC F9 CE FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 0A 06 00 00: call 0x587980f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA 01 00 00: call 0x58797ce0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
