// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053789C .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_0053789c_0053789C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5378cd
        __asm _emit 0x75
        __asm _emit 0x14
        push 419h
        push 636640h
        ; Exact mapped bytes E8 78 14 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5378cd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5378a8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 98 BC 68 00: call dword ptr [0x68bc98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 42: jle 0x537937
        __asm _emit 0x7e
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + ecx + 2]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3C 59 F9 FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 98 BC 68 00: call dword ptr [0x68bc98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9E 58 F9 FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x53793f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 13 4E F9 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
