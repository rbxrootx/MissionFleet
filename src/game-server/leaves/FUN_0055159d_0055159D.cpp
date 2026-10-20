// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055159D .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_0055159d_0055159D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 163h
        push 5cf7b8h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A7 9B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5F: je 0x551633
        __asm _emit 0x74
        __asm _emit 0x5f
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 0ch], eax
        push 16bh
        push 5cf7b8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 67 9B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 35 FA FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 16dh
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 49 9B FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF D7 F9 FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x551631
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 02: jmp 0x551633
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9B: jmp 0x5515ce
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 74 1B: je 0x551659
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 D4 00 00 00: call dword ptr [eax + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 70h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
