// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524D40 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_58524d40_58524D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 28h
        ; Exact mapped bytes 0F 8E B6 00 00 00: jle 0x58524e17
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        sar edx, 3
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        shl eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        imul edx, dword ptr [ebp - 0ch], 11ch
        add edx, dword ptr [ebp + 8]
        push edx
        imul eax, dword ptr [ebp - 4], 11ch
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F8 02 00 00: call 0x58525090
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp + 14h]
        push edx
        imul eax, dword ptr [ebp - 4], 11ch
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        imul edx, dword ptr [ebp - 4], 11ch
        mov eax, dword ptr [ebp + 0ch]
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 D0 02 00 00: call 0x58525090
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        imul eax, dword ptr [ebp - 4], 11ch
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, eax
        push ecx
        imul edx, dword ptr [ebp - 0ch], 11ch
        mov eax, dword ptr [ebp + 10h]
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 A6 02 00 00: call 0x58525090
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        imul edx, dword ptr [ebp - 4], 11ch
        mov eax, dword ptr [ebp + 10h]
        sub eax, edx
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        imul edx, dword ptr [ebp - 4], 11ch
        add edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7E 02 00 00: call 0x58525090
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 18: jmp 0x58524e2f
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 64 02 00 00: call 0x58525090
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
