// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585058E0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_585058e0_585058E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x585058f1
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 5E: jmp 0x5850594f
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 C9 1A F8 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x5850591d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        movzx eax, byte ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        push edx
        ; Exact mapped bytes E8 52 56 00 00: call 0x5850af80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58505940
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0F: jmp 0x5850594f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x5850594d
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x5850594f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x58505914
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov esp, ebp
        pop ebp
        ret
    }
}
