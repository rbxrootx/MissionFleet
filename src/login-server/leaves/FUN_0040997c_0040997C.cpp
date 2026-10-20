// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040997C .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_0040997c_0040997C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439cffh
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
        push 66h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 4F 02 00: call 0x42e908
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 F8 A8 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 77 4C 00 00: call 0x40e640
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 B5 16 00 00: call 0x40b090
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 178h
        ; Exact mapped bytes E8 C3 A8 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43ce28h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 160h], 1f4ah
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 164h], 0b8h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 16ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 170h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 174h], 0
        push 44dba0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 178h
        ; Exact mapped bytes E8 E6 42 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        push 80h
        ; Exact mapped bytes E8 D8 C1 FF FF: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 15 00 00: call 0x40b050
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 17ch], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 85h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 A4 15 00 00: call 0x40b020
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 9E 48 02 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
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
