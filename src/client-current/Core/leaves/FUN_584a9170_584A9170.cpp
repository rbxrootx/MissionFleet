// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9170 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_584a9170_584A9170() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 14 00 00: call 0x584aa5b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 32 DC FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 1F DC FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 0C DC FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0dh], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
