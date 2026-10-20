// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408E30 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_00408e30_00408E30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439b15h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 97 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 43 B4 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 D1 46 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 23 B4 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 11 B4 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 FF B3 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 8D 46 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43c9b0h
        push 44dabch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 55 4E 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
        push 44dac0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 35 4E 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dac4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 22 4E 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dac8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 0F 4E 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 1
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
