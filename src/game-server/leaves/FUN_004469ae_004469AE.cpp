// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004469AE .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004469ae_004469AE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 02 00 00: call 0x446c7d
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 02 00 00: call 0x446c44
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 04 00 00: call 0x446df5
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 04 00 00: call 0x446e3b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 04 00 00: call 0x446e97
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 05 00 00: call 0x446f01
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 05 00 00: call 0x446f73
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 05 00 00: call 0x446fc6
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 02 00 00: call 0x446c1e
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 01 00 00: call 0x446bff
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 01 00 00: call 0x446be0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 01 00 00: call 0x446b9a
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 43 00 00: call 0x44ad56
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 43 00 00: call 0x44ae16
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 00 00 00: call 0x446a46
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 9E 1D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
