// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522C40 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_58522c40_58522C40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        push 2
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 2ch
        push edx
        ; Exact mapped bytes E8 A6 A1 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 18h], ecx
        ; Exact mapped bytes 66 0F B6 55 0C: movzx dx, byte ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x0c
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 66 C1 E2 02: shl dx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x02
        mov ecx, 0fc03h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 48 2C: and cx, word ptr [eax + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x2c
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 2C: mov word ptr [edx + 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 28h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ebp + 8]
        mov byte ptr [edx + 8], al
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 0ch]
        mov byte ptr [ecx + 9], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
