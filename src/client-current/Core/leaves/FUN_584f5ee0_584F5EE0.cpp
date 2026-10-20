// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F5EE0 .. +0x48D bytes.
extern "C" __declspec(naked) void FUN_584f5ee0_584F5EE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        push 0ceh
        mov eax, 14h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a2fc4h
        push 588a2ff0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 04 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 390h
        mov eax, 14h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 14h]
        push edx
        mov eax, 0c0h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 1
        push 588a3000h
        push 588a302ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 04 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0ach
        mov eax, 14h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 14h]
        push edx
        mov eax, 0c0h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a3038h
        push 588a3064h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 04 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0a4h
        mov eax, 14h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a3070h
        push 588a309ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 03 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0b4h
        mov eax, 14h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a30a8h
        push 588a30d4h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 03 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0a8h
        mov edx, 14h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, 0c0h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a30e0h
        push 588a310ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 03 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0ach
        mov edx, 14h
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, 0c0h
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a311ch
        push 588a3148h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 02 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0b4h
        mov edx, 14h
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, 0c0h
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a3158h
        push 588a3184h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 02 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0d4h
        mov edx, 14h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        imul ecx, eax, 0dh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, 0c0h
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 168h]
        push eax
        push 0
        push 588a3194h
        push 588a31c0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 02 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 9ch
        mov ecx, 14h
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, 0c0h
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a31d0h
        push 588a31fch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 01 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 574h
        mov edx, 14h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 8]
        push ecx
        mov edx, 14h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0ah
        push 588a3208h
        push 588a322ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 01 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 318h
        mov eax, 14h
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0bh
        push 588a3240h
        push 588a326ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 01 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 0e0h
        mov eax, 14h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0ch
        push 0
        push 588a3278h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 01 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        push 13ch
        mov eax, 14h
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0dh
        push 588a3288h
        push 588a32b4h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 00 00 00: call 0x584f6410
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
