// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B6D0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_0047b6d0_0047B6D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 DC 8A 68 00: cmp eax, dword ptr [0x688adc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 73 22: jae 0x47b701
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 1B: jne 0x47b71c
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 7A 1F FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 7F 1F FF FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 32: jmp 0x47b74e
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8B 4D 00 00: call 0x4804b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 27 00 00 00: call 0x47b760
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F8 4D 00 00: call 0x480540
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
