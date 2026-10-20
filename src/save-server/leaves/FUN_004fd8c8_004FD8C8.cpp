// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD8C8 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004fd8c8_004FD8C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0fff0h
        cmp eax, 0f000h
        ; Exact mapped bytes 75 28: jne 0x4fd908
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 E9 FF FF: call 0x4fc28b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x4fd908
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 112h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 DD 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x4fd918
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 FB 02 00: call 0x52d50f
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
