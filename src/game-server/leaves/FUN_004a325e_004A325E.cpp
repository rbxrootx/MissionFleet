// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A325E .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_004a325e_004A325E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x4a3310
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        ; Exact mapped bytes A1 30 E5 58 00: mov eax, dword ptr [0x58e530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx], eax
        ; Exact mapped bytes 8B 0D 34 E5 58 00: mov ecx, dword ptr [0x58e534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes A1 38 E5 58 00: mov eax, dword ptr [0x58e538]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 8B 0D 3C E5 58 00: mov ecx, dword ptr [0x58e53c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x4a32c4
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4a329f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 1C: je 0x4a32ef
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4a32ca
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
