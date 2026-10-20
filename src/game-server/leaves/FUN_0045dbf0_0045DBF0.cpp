// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DBF0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_0045dbf0_0045DBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 40 FE FF: call 0x441cb0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x45dc29
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        cmp edx, dword ptr [ecx + 18h]
        ; Exact mapped bytes 75 32: jne 0x45dc5b
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 04 00 00: call 0x45e060
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        add edx, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 06 00 00: call 0x45e350
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6B: jmp 0x45dcc6
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        add edx, 4
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 18h]
        ; Exact mapped bytes 75 32: jne 0x45dc9e
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        add eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 06 00 00: call 0x45e350
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 03 00 00: call 0x45e060
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x45dcc6
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 06 00 00: call 0x45e350
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], ecx
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 01 AB 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
