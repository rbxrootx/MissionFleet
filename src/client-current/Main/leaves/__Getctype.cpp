// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971646 .. +0x60 bytes.
extern "C" __declspec(naked) void __Getctype() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 4F BF 00 00: call 0x5897d5a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 3C BF 00 00: call 0x5897d59a
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        push 100h
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E8 39 BF 00 00: call 0x5897d5a6
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov dword ptr [esi + 8], eax
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x58971695
        __asm _emit 0x74
        __asm _emit 0x1f
        push 200h
        ; Exact mapped bytes E8 0E BF 00 00: call 0x5897d58e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 C3 B6 00 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 0ch], 1
        ; Exact mapped bytes EB 0C: jmp 0x589716a1
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E8 F4 BE 00 00: call 0x5897d58e
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [esi + 0ch], 0
        mov dword ptr [esi + 8], eax
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
